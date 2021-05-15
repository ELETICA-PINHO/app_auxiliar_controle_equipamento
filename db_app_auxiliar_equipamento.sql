-- --------------------------------------------------------
-- Servidor:                     10.0.0.23
-- Versão do servidor:           10.4.18-MariaDB - mariadb.org binary distribution
-- OS do Servidor:               Win64
-- HeidiSQL Versão:              11.2.0.6213
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;
/*!40111 SET @OLD_SQL_NOTES=@@SQL_NOTES, SQL_NOTES=0 */;


-- Copiando estrutura do banco de dados para app_auxiliar_material
CREATE DATABASE IF NOT EXISTS `app_auxiliar_material` /*!40100 DEFAULT CHARACTER SET utf8mb4 */;
USE `app_auxiliar_material`;

-- Copiando estrutura para tabela app_auxiliar_material.materias_lista
CREATE TABLE IF NOT EXISTS `materias_lista` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `equipamento1` varchar(50) NOT NULL,
  `equipamento2` varchar(50) NOT NULL,
  `equipamento3` varchar(50) NOT NULL,
  `equipamento4` varchar(50) NOT NULL,
  `equipamento5` varchar(50) NOT NULL,
  `equipamento6` varchar(50) NOT NULL,
  `instancia` varchar(50) NOT NULL,
  `DataTimer` timestamp NULL DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Exportação de dados foi desmarcado.

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IFNULL(@OLD_FOREIGN_KEY_CHECKS, 1) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40111 SET SQL_NOTES=IFNULL(@OLD_SQL_NOTES, 1) */;
